var sql = require("mssql");
var config = {
    user: "sa",
    password: "",
    database: "",
    port: 1433,
    host: "localhost",
    charset: "utf8"
};

sql.connect(config).then(() => {
    console.log("Connected to database")
})