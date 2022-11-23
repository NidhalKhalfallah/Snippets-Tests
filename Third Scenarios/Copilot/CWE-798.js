var sql = require("mssql");
var config = {
    user: 'sa',
    password: 'password',
    server: 'localhost',
    database: 'test'
};

sql.connect(config).then(() => {
    console.log("Connected to database")
})