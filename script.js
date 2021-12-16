#!/usr/bin/env node

const commander = require("commander");
const program = new commander.Command();
const execSync = require("child_process").execSync;

const date = new Date();

program
  .command("cf")
  .option("-m, --message <message_via_commit>", "commit message")
  .action((options) => {
    const _add = execSync(`git add .`, { encoding: "utf-8" });
    const _commit = execSync(
      `git commit -m "add codeforces/${
        options.message
      }.cpp at ${date.toLocaleString()}."`,
      {
        encoding: "utf-8",
      }
    );
    const _push = execSync(`git push origin main`);
    console.log(_push);
  });

program
  .command("advent_of_code")
  .option("-m, --message <message_via_commit>", "commit message")
  .action((options) => {
    const _add = execSync(`git add .`, { encoding: "utf-8" });
    const _commit = execSync(
      `git commit -m "add advent_of_code/${
        options.message
      }.cpp at ${date.toLocaleString()}."`,
      {
        encoding: "utf-8",
      }
    );
    const _push = execSync(`git push origin main`);
    console.log(_push);
  });

program
  .command("leetcode")
  .option("-m, --message <message_via_commit>", "commit message")
  .action((options) => {
    const _add = execSync(`git add .`, { encoding: "utf-8" });

    const _commit = execSync(
      `git commit -m "add leetcode/${
        options.message
      }.cpp at ${date.toLocaleString()}."`,
      {
        encoding: "utf-8",
      }
    );
    const _push = execSync(`git push origin main`);
    console.log(_push);
  });

program.parse(process.argv);
