const express = require('express');
const tarefasRoutes = require('./routes/tarefas');
const app = express();

app.use(express.json());
app.use('/tarefas', tarefasRoutes);

app.listen(3000, () => {
  console.log('API rodando na porta 3000 🚀');
});
