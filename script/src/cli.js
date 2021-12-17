#!/usr/bin/env node

import commander from "commander";
const program = new commander.Command();

import exec from "child_process";
const execSync = exec.execSync;

import boxen from "boxen";
import chalk from "chalk";

const date = new Date();

program
  .command("cf")
  .description("CodeForces")
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
    const _push = execSync(`git push origin main && clear`);
    if (_push)
      console.log(
        boxen(chalk.yellow(`Successfully pushed ${options.message}.cpp !`), {
          title: "codeforces",
          titleAlignment: "center",
        })
      );
  });

program
  .command("aoc")
  .description("Advent of Code")
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
    if (_push)
      console.log(
        boxen(chalk.yellow(`Successfully pushed ${options.message}.cpp !`), {
          title: "advent of code",
          titleAlignment: "center",
        })
      );
  });

program
  .command("lc")
  .description("LeetCode")
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
    if (_push)
      console.log(
        boxen(chalk.yellow(`Successfully pushed ${options.message}.js !`), {
          title: "leetcode",
          titleAlignment: "center",
        })
      );
  });

program
  .command("ac")
  .description("AtCoder")
  .option("-c, --contest <contest>", "contest")
  .option("-p, --problem <problem>", "problem")
  .action((options) => {
    const _add = execSync(`git add .`, { encoding: "utf-8" });

    const _commit = execSync(
      `git commit -m "add atcoder/contest_${options.contest}/${
        options.problem
      }.cpp at ${date.toLocaleString()}."`,
      {
        encoding: "utf-8",
      }
    );
    const _push = execSync(`git push origin main`);
    if (_push)
      console.log(
        boxen(chalk.yellow(`Successfully pushed ${options.message}.cpp !`), {
          title: "AtCoder",
          titleAlignment: "center",
        })
      );
  });

program.parse(process.argv);
