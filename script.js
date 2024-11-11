const { readFileSync, appendFileSync } = require("fs");

let parts = "";

const content = readFileSync("include/colors.h", "utf-8");
content.replace(/\/\/.+?: (.+?)\r?\n#define (.+?) "(.+?)"/g, (_, desc, name, str) => {
    parts += `| \`${name}\` | ${desc} | \`"${str}"\` |\n`;
});

//console.log(content.match(/\/\/.+?: (.+?)\r?\n#define /g));

appendFileSync("README.md", parts);