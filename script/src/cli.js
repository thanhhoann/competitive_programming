#!/usr/bin/env node

import commander from "commander";
const program = new commander.Command();

import exec from "child_process";
const execSync = exec.execSync;

import boxen from "boxen";
import chalk from "chalk";

const date = new Date();

program
  .command("z")
  .description("Normal Git Add - Commit - Push")
  .option("-m, --message <message>", "message")
  .action((options) => {
    const _add = execSync(`git add .`, { encoding: "utf-8" });
    const _commit = execSync(
      `git commit -m "${options.message} at ${date.toLocaleString()}."`,
      {
        encoding: "utf-8",
      }
    );
    const _push = execSync(`git push origin main`);
    if (_push)
      console.log(
        boxen(chalk.yellow(`Successfully pushed commit: ${options.message}!`), {
          title: "Git",
          titleAlignment: "center",
        })
      );
  });

program
  .command("cf")
  .description("CodeForces")
  .option("-p, --problem <problem>", "problem")
  .action((options) => {
    const _add = execSync(`git add .`, { encoding: "utf-8" });
    const _commit = execSync(
      `git commit -m "add codeforces/${
        options.problem
      }.cpp at ${date.toLocaleString()}."`,
      {
        encoding: "utf-8",
      }
    );
    const _push = execSync(`git push origin main`);
    if (_push)
      console.log(
        boxen(chalk.yellow(`Successfully pushed ${options.problem}.cpp !`), {
          title: "codeforces",
          titleAlignment: "center",
        })
      );
  });

program
  .command("lc")
  .description("LeetCode")
  .option("-p, --problem <problem>", "problem")
  .action((options) => {
    const _add = execSync(`git add .`, { encoding: "utf-8" });
    const _commit = execSync(
      `git commit -m "add leetcode/${
        options.problem
      }.cpp at ${date.toLocaleString()}."`,
      {
        encoding: "utf-8",
      }
    );
    const _push = execSync(`git push origin main`);
    if (_push)
      console.log(
        boxen(chalk.yellow(`Successfully pushed ${options.problem}.js !`), {
          title: "LeetCode",
          titleAlignment: "center",
        })
      );
  });

program
  .command("ac")
  .description("AtCoder")
  .option("-p, --problem <problem>", "problem")
  .action((options) => {
    const _add = execSync(`git add .`, { encoding: "utf-8" });
    const _commit = execSync(
      `git commit -m "add atcoder/${
        options.problem
      }.cpp at ${date.toLocaleString()}."`,
      {
        encoding: "utf-8",
      }
    );
    const _push = execSync(`git push origin main`);
    if (_push)
      console.log(
        boxen(chalk.yellow(`Successfully pushed ${options.problem}.cpp !`), {
          title: "AtCoder",
          titleAlignment: "center",
        })
      );
  });

program.parse(process.argv);
