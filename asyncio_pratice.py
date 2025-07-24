import asyncio
import time
from concurrent.futures import ThreadPoolExecutor

# Async monitor
async def video_monitor(duration):
    start = time.time()
    while time.time() - start < duration:
        print("🎥 Monitoring video...")
        await asyncio.sleep(1)

# Blocking functions
def pause():
    print("⏸️ Pausing... (takes 5s)")
    time.sleep(5)
    print("✅ Paused")

def resume():
    print("▶️ Resuming... (takes 2s)")
    time.sleep(2)
    print("✅ Resumed")

def seek():
    print("⏩ Seeking to new position... (takes 3s)")
    time.sleep(3)
    print("✅ Seek complete")

def change_speed():
    print("⏫ Changing speed to 1.5x... (takes 1s)")
    time.sleep(1)
    print("✅ Speed changed")

# Async wrapper to run tasks in order with delays
async def playback_controls(loop, executor):
    await asyncio.sleep(5)  # Wait before pausing
    await loop.run_in_executor(executor, pause)
    
    await asyncio.sleep(0.5)
    await loop.run_in_executor(executor, resume)
    
    await asyncio.sleep(0.5)
    await loop.run_in_executor(executor, seek)
    
    await asyncio.sleep(0.5)
    await loop.run_in_executor(executor, change_speed)

# Main runner
async def main():
    loop = asyncio.get_running_loop()
    executor = ThreadPoolExecutor()

    monitor_task = asyncio.create_task(video_monitor(15))
    control_task = asyncio.create_task(playback_controls(loop, executor))

    await asyncio.gather(monitor_task, control_task)

asyncio.run(main())

