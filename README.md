# How to test the puzzle handshake

* Step 1. login the VM as user jenpo.  
* Step 2. execute "make" under directory ~src/tor, the executable "tor" will be in directory ~src/tor/or/.  
* Step 3. execute ./src/tor/src/or/tor to activate a tor bridge  
* Step 4. login the VM as user jenpo_client with passwd, jenpo484.  
* Step 5. execute "make" under directory ~src/tor, the executable "tor" will be in directory ~src/tor/or/.  
* Step 6. execute ./src/tor/src/or/tor to activate a tor client  
* Step 7. you should see 'bootstrapped 100%: Done' in the log file, /usr/local/log/tor/notice_client.  
* Step 8. As user jenpo_client, execute Firefox and goto [https://check.torproject.org/],you shall see 'congratulations!',which means that the tor client has successfully solved the bridge's puzzle and make its IP address appear to be like 178.63.97.34 (The VM's IP is 128.59.23.176).
* Step 9. check log files under directory "/usr/local/log/tor" and there are four logs: debug_bridge, notice_bridge, debug_client, notice_client.  
* Setp 10. search keyword "testing - IP" within debug_* files, you can see the puzzle handshake step by step. 
