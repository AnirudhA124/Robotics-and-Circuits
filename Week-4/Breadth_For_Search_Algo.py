from pyamaze import maze,agent,COLOR,textLabel

def BFS(m):
    start=(m.rows,m.cols)
    frontier=[start]
    explored=[start]
    bfsPath={}
    while len(frontier)>0:
        currCell=frontier.pop(0)
        if currCell==(1,1):
            break
        for d in 'ESNW':
            if m.maze_map[currCell][d]==True:
                if d=='E':
                    chilCell=(currCell[0],currCell[1]+1)
                elif d=='W':
                    chilCell=(currCell[0],currCell[1]-1)
                elif d=='N':
                    chilCell=(currCell[0]-1,currCell[1])
                elif d=='S':
                    chilCell=(currCell[0]+1,currCell[1])
                if chilCell in explored:
                    continue
                explored.append(chilCell)
                frontier.append(chilCell)
                bfsPath[chilCell]=currCell
    fwdPath={}
    cell=(1,1)
    while cell!=start:
        fwdPath[bfsPath[cell]]=cell
        cell=bfsPath[cell]
    return fwdPath

if __name__=='__main__':
    m=maze(5,5)
    m.CreateMaze()
    path=BFS(m)
    a=agent(m,footprints=True,shape='arrow')
    m.tracePath({a:path})
    l=textLabel(m,'BFS Path Length:',len(path)+1)
    m.run()