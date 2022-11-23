var sql = require("mssql");
var config = {
    user:
};

sql.connect(config).then(() => {
    console.log("Connected to database")
})