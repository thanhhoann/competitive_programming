#!/usr/bin/env node

import commander from "commander";
const program = new commander.Command();

import exec from "child_process";
const execSync = exec.execSync;
import boxen from "boxen";

const date = new Date();

program
  .command("codeforces")
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
    const clear = execSync("clear");
    if (_push)
      console.log(
        boxen(`Successfully pushed ${options.message}.cpp !`, {
          title: "Git",
          titleAlignment: "center",
        })
      );
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
    if (_push) console.log(boxen("unicorn", { padding: 1 }));
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
    if (_push) console.log(`PUSHED ${options.message} !`);
  });

program.parse(process.argv);
