var sql = require("mssql");
var config = {
    user: 'sa',
    password: '123456',
    server: 'localhost',
    database: 'test',
    port: 1433
};

sql.connect(config).then(() => {
    console.log("Connected to database")
})