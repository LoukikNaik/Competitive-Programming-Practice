## 2 Weeks Git & Github Challenge
[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)


### Here is a SUMMARY of the topics related to git and their PRIORITY. 
diff
First we will talk abut "GIT"

|CRITICAL                                 |             IMPORTANT                | NICE TO KNOW  |
| :---                                    |               :---:                  |     ---:      |
| DAY 1                                                                                          |
| `What is Git?`                          | `Who uses Git?`                      | `History`     |
|` Difference between git and Github? `   | `What does Git do for us?`           |               |
| DAY 2                                                                                          |
|` Config your Git name and Email `       | `Understanding .git folder`          |               |
|` Terminal Crash Course `                |                                      |    |
|` Different ways to interact with git`   |                                      |    |
| DAY 3                                                                               |
|` What is Git Repository `               |                                      |    |
|` git init `                             |                                      |    |
|` git status `                           |                                      |    |
|` git add`                               |                                      |    |
|` git log `                              |                                      |    |
|` git commit `                           |                                      |    |
|` The Committing Workflow`               |                                      |    |
| DAY 4                                                                               |
|` .gitignore `                           | ` WRITING Atomic Commits `           | `Working with GUI `|
|                                         | ` Good Commit Messages.  `           | `Amending Commits `|
| DAY 5                                                                               |
|`Branching `                             | ` Navigating Git Documentation `     |    |
|`git HEAD `                              |                                      |    |
|`git branch `                            |                                      |    |
|`git switch` or `git checkout`           |                                      |    |
| DAY 6                                                                               |
|`Merging `                               |                                      |    | 
|`Fast Forward Merges `                   |                                      |    |
|`git merge `                             |                                      |    | 
|`Resolving Merge Conflict`               |                                      |    | 
| DAY 7                                                                               |
|`Reading Diffs `                         | ` Diff Branches `                    |    |
|` git diff `                             | ` Diffing Commets`                   |    |
|                                         | ` Diffing Specific Files`            |    |
|                                         | ` Git diff --staged`                 |    |
| DAY 8                                                                               |
|                                         | ` Git Stash Basics `                 | `Re-applying your stashed changes`   |
|                                         | ` Stashing git `                     | `Stashing untracked or ignored files`|
|                                         | ` git stash pop`                     | `Managing multiple stashes`  |
| DAY 9                                                                               |
|` Checking out Commits  `                | `Discarding Changes With Checkout`   |    |
|` Escaping Detached HEAD`                | `git restore`                        |    |
|                                         | `git reset`                          |    |
|                                         | `git revert`                         |    |
 









DAY 1




- "What is Git?" and "What is VCS?".  
>Git is a Version Control System.  
>VCS or Version Control System is a software that tracks and manage changes to files overtime.
>Which changes were made?
>Who made the changes?
>When were the changes made?
>Why were changes needed?

- Difference Between Git and Github.

| Git           | Github        |
| ------------- | ------------- |
| Git is a software.  | GitHub is a service.  |
| Git is a command-line tool  | GitHub is a graphical user interface  |
| Git is installed locally on the system  | GitHub is hosted on the web |
| Git is focused on version control and code sharing.| GitHub is focused on centralized source code hosting.  |
| Git has no user management feature.  | GitHub has built-in user management feature  |


- [Who uses Git?](https://stackshare.io/git#:~:text=Who%20uses%20Git%3F&text=7047%20companies%20reportedly%20use%20Git,Netflix%2C%20Shopify%2C%20and%20Udemy.)
- [What does Git Do for us?](https://medium.com/swlh/git-as-the-newbies-learning-steroid-963a2146220b)
- [Histroy of GIT.](https://git-scm.com/book/en/v2/Getting-Started-A-Short-History-of-Git)

 





DAY 2





- Configure your Git name and Email.
> 1. Open the command line.
> 2. Set your username: git config --global user.name "FIRST_NAME LAST_NAME"
> 3. Set your email address: git config --global user.email "MY_NAME@example.com"


<b>TERMINAL CRASH COURSE</b>

| Command | Description |
| --- | --- |
| `ls` | list all the content.                                    |
| `open` | The selected directory will open in finder.            |
| `pwd` | Print Working Directory / Current Path.                 |
| `cd` | change directory / it's like double clicking on a file.  |
| `cd ..` | Back one folder.                                      |
| `touch` | creates a file.                                       |  
| `mkdir` |creates a directory.                                   |
| `rm` | remove a fie.(PERMANENTLY).                              |
| `rm -rf` | remove a directory.(PERMANENTLY).                    |
| `ls -a` | shows all files including hidden.                     |

- Different ways to interact with git.
> There are Two ways, one is the command line and the other is with use of different applications like GitKraken, Github Desktop, etc.


- Understanding the .git Folder.
> The . git folder contains all the information that is necessary for your project in version control and all the information about commits, remote repository address, etc. All of them are present in this folder. It also contains a log that stores your commit history so that you can roll back to history.





DAY 3





- What is a "Repository" or "Repo"? For Detail go to [this](https://www.geeksforgeeks.org/what-is-a-git-repository/) link.
>Repositories in GIT contain a collection of files of various different versions of a Project. These files are imported from the repository into the local server of the user for further updations and modifications in the content of the file.


| Git Command | Description |
| --- | --- |
| `git init` | initializes a brand new Git repository and begins tracking an existing directory. It adds a hidden subfolder within the existing directory that houses the internal data structure required for version control.   |
| `git status` | shows the status of changes as untracked, modified, or staged. |
| `git add`    | This command performs staging, the second part of that three-step process. Any changes that are staged will become a part of the next snapshot and a part of the project’s history. |
| `git log`    | The git log command shows a list of all the commits made to a repository. You can see the hash of each Git commit, the message associated with each commit, and more metadata. |
| `git commit` | saves the snapshot to the project history and completes the change-tracking process. In short, a commit functions like taking a photo. Anything that’s been staged with git add will become a part of the snapshot with git commit.  |

- Steps to Use "git init" using terminal:
1. We open "Terminal".
2. Go to a desired position.
3. Make a Directory/Folder by "mkdir".
4. Then use "git init".

:warning: Do Not 'git init' a repository inside a repository.:warning:

If you did make a repository inside a repository itself, then you have to delete the *folder* consisting the second repository.



- The *"COMMITTING WORKFLOW"* goes like this:
<!-- - First we Make A Folder/File and write some stuff inside it.
- Then we will use `git status` command to see if the folder is alreaady in a repo or not. If not then,
- Then we use the `git init` command to make a `.git` hidden file. (Don't Make a .git file inside a repository).
- Then we will use command  -->
<!-- 
![alt text](https://github.com/raghavguptaa/2Weeks_Git-Github-Challenge/blob/main/Flowchart's/GIT1.png) -->

Example!

![alt text](https://github.com/raghavguptaa/2Weeks_Git-Github-Challenge/blob/main/Flowchart's/GIT2.png)

Basically it's JUST THIS:

![alt text](https://github.com/raghavguptaa/2Weeks_Git-Github-Challenge/blob/main/Flowchart's/GIT3.png)

![alt text](https://github.com/raghavguptaa/2Weeks_Git-Github-Challenge/blob/main/Flowchart's/GIT4.png)







DAY 4




- .What are gitignore files?
> Specifies intentionally untracked files to ignore.
> Example: There are projects where you use some API's like Stripe or Paypal for user transactions and you don't want to put the authentic key to github. So we put the file name in .gitignore folder. 
> There is a website which gives us all the .gitignore file names accoording to our project. You can find it [HERE](https://www.toptal.com/developers/gitignore)


- Writing Atomic Commits.
> An atomic commit is a commit that is focused on one context and one context only. For more info go [HERE](https://coderwall.com/p/jmqp0a/why-and-how-i-craft-atomic-commits-in-git)


- How to Write Comments on `git commit`
> `git commit -m "<text>" `

[Here is the link how to write best git commit messages.](https://www.freecodecamp.org/news/writing-good-commit-messages-a-practical-guide/)


- Working with GUI
> You will find an answer [HERE](https://git-scm.com/book/en/v2/Appendix-A%3A-Git-in-Other-Environments-Graphical-Interfaces)


- Ammending Commits.

| Git Command | Description |
| --- | --- |
| `git commit --amend` | This command is a convenient way to modify the most recent commit. It lets you combine staged changes with the previous commit instead of creating an entirely new commit. It can also be used to simply edit the previous commit message without changing its snapshot.  |





DAY 5



- Branching
> A branch in Git is simply a lightweight movable pointer to one of these commits. The default branch name in Git is master . As you start making commits, you're given a master branch that points to the last commit you made. Every time you commit, the master branch pointer moves forward automatically.
> If we make changes oon one branch, they do not impact other branches. (Unless we merge the changes).

- MASTER branch
> In Git, "master" is a naming convention for a branch. After cloning (downloading) a project from a remote server, the resulting local repository has a single local branch: the so-called "master" branch. This means that "master" can be seen as a repository's `"default"` branch.

| Git           | Github        |
| ------------- | ------------- |
| Master is Default.       | Main is Default.   |

- What is "HEAD" in git?
> When working with Git, only one branch can be checked out at a time - and this is what's called the "HEAD" branch. Often, this is also referred to as the "active" or "current" branch.
> Git makes note of this current branch in a file located inside the Git repository, in .git/HEAD. (This is an internal file, so it should not be manually manipulated!)

| Git Command     | Description |
| ----- | ----- |
| `git branch` | List all of the branches in your repository. This is synonymous with git branch --list.|
| `git branch <branch>` | Create a new branch called ＜branch＞. This does not check out the new branch. |
| `git branch -d <branch>` | Delete the specified branch.This is a “safe” operation in that Git prevents you from deleting the branch if it has unmerged changes.|
| `git branch -D <branch>` | Force delete the specified branch, even if it has unmerged changes. This is the command to use if you want to permanently throw away all of the commits associated with a particular line of development. |
| `git branch -m <branch>` | Rename the current branch to ＜branch＞. |
| `git branch -a` | List all remote branches. |




> Active / Selected Branch will have a <b> "*" </b> in front of name.
![alt](https://github.com/raghavguptaa/2Weeks_Git-Github-Challenge/blob/main/Images/Git_Branch.png)




| Git Command | Description |
| --- | --- |
| `git switch` or `git checkout` | The "switch" command allows you to switch your current HEAD branch. It's relatively new (added in Git v2.23) and provides a simpler alternative to the classic "checkout" command. For [MORE](https://www.git-tower.com/learn/git/commands/git-switch/). |


- Navigating GIT Documentation. 
> For Detailed Information go [HERE](https://git-scm.com/docs/user-manual)





DAY 6

- Merging
> Merging is Git's way of putting a forked history back together again. The git merge command lets you take the independent lines of development created by git branch and integrate them into a single branch.

- Fast-Forward Merge
> A fast-forward merge can occur when there is a linear path from the current branch tip to the target branch. Instead of “actually” merging the branches, all Git has to do to integrate the histories is move (i.e., “fast forward”) the current branch tip up to the target branch tip. This effectively combines the histories, since all of the commits reachable from the target branch are now available through the current one.

![alt](https://github.com/raghavguptaa/2Weeks_Git-Github-Challenge/blob/main/Flowchart's/Fastforward.png)


- 3 Way Merge
> 3-way merges use a dedicated commit to tie together the two histories. The nomenclature comes from the fact that Git uses three commits to generate the merge commit: the two branch tips and their common ancestor.

![alt](https://github.com/raghavguptaa/2Weeks_Git-Github-Challenge/blob/main/Flowchart's/3WayMerge.png)

| Git Command | Description |
| --- | --- |
| `git merge` | Git merge will combine multiple sequences of commits into one unified history. In the most frequent use cases, git merge is used to combine two branches.   |

- Resolving Merge Conflicts!
> If the two branches you're trying to merge both changed the same part of the same file, Git won't be able to figure out which version to use. When such a situation occurs, it stops right before the merge commit so that you can resolve the conflicts manually.

- How Conflict's are PRESENTED!
> When Git encounters a conflict during a merge, It will edit the content of the affected files with visual indicators that mark both sides of the conflicted content. These visual markers are: <<<<<<<, =======, and >>>>>>>. Its helpful to search a project for these indicators during a merge to find where conflicts need to be resolved.
![alt](https://github.com/raghavguptaa/2Weeks_Git-Github-Challenge/blob/main/Images/Git_Merge.png)
> Generally the content before the ======= marker is the receiving branch and the part after is the merging branch.
> Note that merge conflicts will only occur in the event of a 3-way merge. It’s not possible to have conflicting changes in a fast-forward merge. 



- Git commands that can help resolve merge conflicts:


| Git Command | Description |
| --- | --- |
| `git status` | The status command is in frequent use when a working with Git and during a merge it will help identify conflicted files.|
| `git log --merge` | Passing the --merge argument to the git log command will produce a log with a list of commits that conflict between the merging branches.|
| `git diff` | diff helps find differences between states of a repository/files. This is useful in predicting and preventing merge conflicts.|

- Tools for when git fails to start a merge:


| Git Command | Description |
| --- | --- |
| `git checkout` | checkout can be used for undoing changes to files, or for changing branches|
| `git reset --mixed` | reset can be used to undo changes to the working directory and staging area.|

- Tools for when git conflicts arise during a merge:


| Git Command | Description |
| --- | --- |
| `git merge --abort` | Executing git merge with the --abort option will exit from the merge process and return the branch to the state before the merge began.|
| `git reset` | Git reset can be used during a merge conflict to reset conflicted files to a know good state|






DAY 7



- Reading Diffs
> Diffing is a function that takes two input data sets and outputs the changes between them. git diff is a multi-use Git command that when executed runs a diff function on Git data sources. These data sources can be commits, branches, files and more. 


| Git Command | Description |
| --- | --- |
| `git diff` | Show changes between commits, commit and working tree, etc. or  Running the plain git diff command without any parameters can be pretty helpful: it will show you all of your local changes since you last committed.|

- Let us Understand with an Example:


 terminal
$:> mkdir diff_test_repo
$:> cd diff_test_repo
$:> touch diff_test.txt
$:> echo "this is a git diff test example" > diff_test.txt
$:> git init .
Initialized empty Git repository in /Users/kev/code/test/.git/
$:> git add diff_test.txt
$:> git commit -am"add diff test file"
[main (root-commit) 6f77fc3] add diff test file
1 file changed, 1 insertion(+)
create mode 100644 diff_test.txt


If we execute git diff at this point, there will be no output. This is expected behavior as there are no changes in the repo to diff. Once the repo is created and we've added the diff_test.txt file, we can change the contents of the file to start experimenting with diff output.

$:> echo "this is a diff example" > diff_test.txt

Executing this command will change the content of the diff_test.txt file. Once modified, we can view a diff and analyze the output. Now executing git diff will produce the following output:

 terminal
diff --git a/diff_test.txt b/diff_test.txt
index 6b0c6cf..b37e70a 100644
--- a/diff_test.txt
+++ b/diff_test.txt
@@ -1 +1 @@
-this is a git diff test example
+this is a diff example


<!-- ![alt](https://github.com/raghavguptaa/2Weeks_Git-Github-Challenge/blob/main/Images/git_diff_2.png) -->


Let us now examine a more detailed breakdown of the diff output.


| Diff Headings  | Diff Output |
| ------------- | ------------- |
| Comparison input    | `diff --git a/diff_test.txt b/diff_test.txt ` |
| Meta data           | `index 6b0c6cf..b37e70a 100644`  |
| Markers for changes | `--- a/diff_test.txt`  `+++ b/diff_test.txt`  |
| Diff Chunks         | `@@ -1 +1 @@  `|


- `Comparison input`
> diff --git a/diff_test.txt b/diff_test.txt

This line displays the input sources of the diff. We can see that a/diff_test.txt and b/diff_test.txt have been passed to the diff.

- `Meta data`
> index 6b0c6cf..b37e70a 100644

This line displays some internal Git metadata. You will most likely not need this information. The numbers in this output correspond to Git object version hash identifiers.

- `Markers for changes`
> --- a/diff_test.txt     
> +++ b/diff_test.txt     

These lines are a legend that assigns symbols to each diff input source. In this case, changes from a/diff_test.txt are marked with a --- and the changes from b/diff_test.txt are marked with the +++ symbol.


- ` Diff chunks`
> @@ -1 +1 @@   
> -this is a git diff test example    
> +this is a diff example    

The first line is the chunk header. Each chunk is prepended by a header inclosed within @@ symbols. The content of the header is a summary of changes made to the file. In our simplified example, we have -1 +1 meaning line one had changes. In a more realistic diff, you would see a header like:

> @@ -34,6 +34,8 @@

In this header example, 6 lines have been extracted starting from line number 34. Additionally, 8 lines have been added starting at line number 34.

The remaining content of the diff chunk displays the recent changes. Each changed line is prepended with a + or - symbol indicating which version of the diff input the changes come from. As we previously discussed, - indicates changes from the a/diff_test.txt and + indicates changes from b/diff_test.txt.



- Diffing Commands!

| Command | Description |
| --- | --- |
| `git diff branch1..branch2` | Using this command, Git will compare the tip of both branches (also called the HEAD) and display a “diff” recap that you can use to see modifications. |
| `git diff <commit-id> <commit-id>` | To view the changes between two commits, you can provide the commit hashes. The hash can be a full SHA-1 hash or a short SHA-1 hash or ancestry path. |

For MORE INFO on DIFFING COMMANDS go [HERE](https://git-scm.com/docs/git-diff)




DAY 8




- Git Stash Basics
> git stash temporarily shelves (or stashes) changes you've made to your working copy so you can work on something else, and then come back and re-apply them later on. Stashing is handy if you need to quickly switch context and work on something else, but you're mid-way through a code change and aren't quite ready to commit.


- Stashing GIT
> The git stash command takes your uncommitted changes (both staged and unstaged), saves them away for later use, and then reverts them from your working copy.

## Example: 
terminal
$ git status
On branch main
Changes to be committed:

    new file:   style.css

Changes not staged for commit:

    modified:   index.html

$ git stash
Saved working directory and index state WIP on main: 5002d47 our new homepage
HEAD is now at 5002d47 our new homepage

$ git status
On branch main
nothing to commit, working tree clean


At this point you're free to make changes, create new commits, switch branches, and perform any other Git operations; then come back and re-apply your stash when you're ready.

Note that the stash is local to your Git repository; stashes are not transferred to the server when you push.

- Re-applying your stashed changes

> You can reapply previously stashed changes with `git stash pop`:
> Popping your stash removes the changes from your stash and reapplies them to your working copy.

 terminal
$ git status
On branch main
nothing to commit, working tree clean
$ git stash pop
On branch main
Changes to be committed:

    new file:   style.css

Changes not staged for commit:

    modified:   index.html

Dropped refs/stash@{0} (32b3aa1d185dfe6d57b3c3cc3b32cbf3e380cc6a)





- Stashing untracked or ignored files

By default, running git stash will stash: changes that have been added to your index (staged changes) changes made to files that are currently tracked by Git (unstaged changes). But it will not stash: new files in your working copy that have not yet been staged files that have been ignored. So if we add a third file to our example above, but don't stage it (i.e. we don't run git add), git stash won't stash it.



- Managing multiple stashes

You aren't limited to a single stash. You can run git stash several times to create multiple stashes, and then use git stash list to view them. By default, stashes are identified simply as a "WIP" – work in progress – on top of the branch and commit that you created the stash from. After a while it can be difficult to remember what each stash contains:

 terminal with colours

$ git stash list
stash@{0}: WIP on main: 5002d47 our new homepage
stash@{1}: WIP on main: 5002d47 our new homepage
stash@{2}: WIP on main: 5002d47 our new homepage



To provide a bit more context, it's good practice to annotate your stashes with a description, using git stash save "message":

 terminal 

$ git stash save "add style to our site"
Saved working directory and index state On main: add style to our site
HEAD is now at 5002d47 our new homepage

$ git stash list
stash@{0}: On main: add style to our site
stash@{1}: WIP on main: 5002d47 our new homepage
stash@{2}: WIP on main: 5002d47 our new homepage



By default, git stash pop will re-apply the most recently created stash: stash@{0}

You can choose which stash to re-apply by passing its identifier as the last argument, for example:

 terminal
$ git stash pop stash@{2}