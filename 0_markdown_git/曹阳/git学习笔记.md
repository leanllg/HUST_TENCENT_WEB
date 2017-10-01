#Git学习笔记


##基本命令
- `mkdir file` 创建文件夹
- `cd file`    进入文件夹 
- `git init`   使目录可管理
- `pwd`查看当前目录
- `git add`提交至暂存区
- `git commit -m ""`提交至分支
- `git status`查看仓库
- `git diff`查看工作区和暂存区不同
- `git diff -- cashed` 查看暂存区和分支不同
- `git diff HEAD -- file` 查看工作区和分支不同
- `cat file` 查看文件内容
- `git clone git@github.com:yonhumin/Repository name.git`将远程库内容克隆至本地

##版本回退
- `git log`查看提交日志
- `git reset --hard HEAD^`回退至上一版本,将`HEAD^`换为版本号可切换至相应版本
- `git reflog` 记录每一次命令
##工作区和暂存区
1. 工作区——>暂存区——>分支
2. HEAD指针指向分支，`git checkout dev`将指针指向dev分支
3.  
##撤销修改
1. `git checkout -- file`撤销工作区修改（未提交至暂存区则回退至版本库版本，提交至暂存区且修改后则回退至暂存区版本）
2. `git reset HEAD file`撤销暂存区修改
##删除文件
- `git rm file`然后commit则删除文件
- 误删可用`git checkout -- file`撤销删除
##添加远程仓库
1. 在github创建一个仓库
2. 使用`git remote add origin git@github.com:yonhumin/Repository name.git`将本地仓库和远程仓库关联
3. 第一次使用`$ git push -u origin master`将内容推送至远程库(由于远程库是空的，第一次推送master分支时，加上了-u参数，Git不但会把本地的master分支内容推送的远程新的master分支，还会把本地的master分支和远程的master分支关联起来）
4. 以后可使用`$ git push origin master`直接推送
##分支
###创建分支
- `git checkout -b dev`创建并切换分支
- `git branch dev`创建分支
- `git branch`查看分支（当前分支前会出现*）
- `git merge dev`合并指定dev分支到当前分支
- `git branch -d dev`删除分支
- 对未合并的分支使用`git branch -D dev`强制删除分支
- `git log --greph`查看分支合并图
##修改bug
1. 使用git stash保存工作现场
2. 修改bug
3. 使用git stash list查看保存列表
4. 用git stash apply恢复并用giti stash drop删除或用git stash pop一步恢复并删除
##多人合作
- 使用`git remote`或`git remote -v`查看更详细的信息
- 


