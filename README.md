# vscode template for C++

## 配置

```shell
git clone https://github.com/jiayuancs/template.git
cd template
rm -rf .git/ package.json
```

### Git配置

在项目根目录执行如下命令，初始化Git仓库：

```shell
git init
git branch -M main
git remote add origin 新建的Github仓库地址
```

配置基本信息（如不使用`--global`，则配置仅对当前仓库有效）

```shell
git config --global --add user.name "jiayuancs"
git config --global --add user.email "xxx@xxx.xx"
```

### npm配置

在项目根目录执行如下命令，根据提示补全项目信息：

```shell
npm init
```

编辑 `~/.npmrc` 文件，添加如下内容：

```ini
# 设置tag的前缀
tag-version-prefix="v"

# 设置npm version默认commit的消息
message="chore(release): upgrade to v%s"
```

编辑项目根目录的 `package.json` 文件，添加如下脚本：

```json
"scripts": {
  "version": "conventional-changelog -p angular -i CHANGELOG.md -s && git add CHANGELOG.md"
}
```

## 工作流

1. 克隆远程仓库
2. 新建分支
3. 修改代码
4. git add 和 git commit
5. 测试
6. merge到main分支
7. `npm version [major|minor|patch]`
8. `git push origin <branch-name>`
9. `git push origin --tags`
