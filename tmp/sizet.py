import os

def disk_useage(path):
    """ Return the number of bytes used by a file/folder and any descendents."""
    total = os.path.getsize(path)
    if os.path.isdir(path):
        for filename in os.listdir(path):
            childpath = os.path.join(path, filename)
            total += disk_usage(childpath)

    print('{0:<7}'.format(total), path)
    return total

if __name__ == "__main__":
    size = disk_useage("/mnt/d/workspace/prototype/")
    print(size)