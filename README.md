<h1>Scheduler</h1>

<p>
This task-manager provides basic functionality for real-time C++ applications.<br />
You can find a Blink-example for Raspberry Pi 5 <a href="https://github.com/svenbieg/Blink">here</a>.
</p>
<br />

<img src="https://github.com/user-attachments/assets/a62770eb-6f1a-4035-a30c-d2c6846475e8" /><br />
<br />

<h2>Synchronization Primitives</h2>

<table>
  <tr>
    <td><a href="https://github.com/svenbieg/Scheduler/wiki#critical-section">CriticalSection</a></td>
    <td>Used with a SpinLock, keeping other cores in a loop while scheduling</td>
  </tr><tr><td></td></tr><tr>
    <td><a href="https://github.com/svenbieg/Scheduler/wiki#mutex">Mutex</a></td>
    <td>Suspending other tasks when held by a ScopedLock, a SharedLock or a TaskLock</td>
  </tr><tr><td></td></tr><tr>
    <td><a href="https://github.com/svenbieg/Scheduler/wiki#signal">Signal</a></td>
    <td>Used to synchronize tasks</td>
  </tr>
</table><br />

<p>
You can find detailed information in the <a href="https://github.com/svenbieg/Scheduler/wiki">Wiki</a>
</p>
<br />
