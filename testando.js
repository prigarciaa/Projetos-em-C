const fs = require('fs');
const path = './data/tarefas.json';

const lerTarefas = () => JSON.parse(fs.readFileSync(path));
const salvarTarefas = (dados) => fs.writeFileSync(path, JSON.stringify(dados, null, 2));

exports.listarTarefas = (req, res) => {
  const tarefas = lerTarefas();
  res.json(tarefas);
};

exports.criarTarefa = (req, res) => {
  const tarefas = lerTarefas();
  const nova = { id: Date.now(), ...req.body };
  tarefas.push(nova);
  salvarTarefas(tarefas);
  res.status(201).json(nova);
};

exports.editarTarefa = (req, res) => {
  const tarefas = lerTarefas();
  const id = parseInt(req.params.id);
  const index = tarefas.findIndex(t => t.id === id);
  if (index === -1) return res.status(404).json({ erro: "Tarefa não encontrada" });
  tarefas[index] = { ...tarefas[index], ...req.body };
  salvarTarefas(tarefas);
  res.json(tarefas[index]);
};

exports.deletarTarefa = (req, res) => {
  let tarefas = lerTarefas();
  const id = parseInt(req.params.id);
  tarefas = tarefas.filter(t => t.id !== id);
  salvarTarefas(tarefas);
  res.status(204).end();
};