var sql = require("mssql");
var config = {
    user:"sa",
    password: "XXXXXX",
    server: "localhost",
    database: "test",
    options: {
        encrypt: false,
        enableArithAbort: true
        }
        };

sql.connect(config).then(() => {
    console.log("Connected to database")
})