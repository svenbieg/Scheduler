<h1>Scheduler</h1>

<p>
This is my task-manager for real-time C++ applications.<br />
You need my <a href="https://github.com/svenbieg/Default">standard-library</a> to compile it.<br />
</p>
<br />

<img src="https://github.com/user-attachments/assets/a62770eb-6f1a-4035-a30c-d2c6846475e8" /><br />
<br />

<h2>Synchronization Primitives</h2>

<table>
  <tr>
    <td><a href="https://github.com/svenbieg/Scheduler/wiki/Scheduler#critical-section">CriticalSection</a></td>
    <td>Used with a SpinLock, keeping other cores in a loop while scheduling</td>
  </tr><tr><td></td></tr><tr>
    <td><a href="https://github.com/svenbieg/Scheduler/wiki/Scheduler#mutex">Mutex</a></td>
    <td>Suspending other tasks when held by a ScopedLock, a SharedLock or a TaskLock</td>
  </tr><tr><td></td></tr><tr>
    <td><a href="https://github.com/svenbieg/Scheduler/wiki/Scheduler#signal">Signal</a></td>
    <td>Used to synchronize tasks</td>
  </tr>
</table><br />

<p>
Here is a <a href="https://github.com/svenbieg/Blink">Blink</a>-example for Raspberry Pi 5.
</p>
<br />
