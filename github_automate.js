#!/usr/bin/env node

// const commander = require('commander'); // (normal include)
const commander = require("commander"); // include commander in git clone of commander repo
const program = new commander.Command();
const execSync = require("child_process").execSync;

// Example program using the command configuration option isDefault to specify the default command.
//
// $ node defaultCommand.js build
// build
// $ node defaultCommand.js serve -p 8080
// server on port 8080
// $ node defaultCommand.js -p 443
// server on port 443

program
  .command("build")
  .description("build web site for deployment")
  .action(() => {
    console.log("build");
  });

program
  .command("publish")
  .description("Basic Git operations.")
  .option("-m, --message <message_via_commit>", "commit message")
  .action((options) => {
    const _add = execSync(`git add .`, { encoding: "utf-8" }); // the default is 'buffer'
    const _commit = execSync(`git commit -m ${options.message}`, {
      encoding: "utf-8",
    });
    const _push = execSync(`git push origin main`);
    console.log(_push);
  });

program
  .command("deploy")
  .description("deploy web site to production")
  .action(() => {
    console.log("deploy");
  });

program
  .command("serve", { isDefault: true })
  .description("launch web server")
  .option("-p,--port <port_number>", "web port")
  .action((options) => {
    console.log(`server on port ${options.port}`);
  });

program.parse(process.argv);
