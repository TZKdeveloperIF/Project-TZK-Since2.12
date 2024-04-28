/* Design of upgrade:
1. For each upgrade and cancle upgrade request, there is an unique "order" ID generated by server
2. All upgrading order will be recorded in an array
3. Processing orders is serial.
*/

TzkSvrUpgOrderId = 0;
// element format: [upg, si, gi, orderID]
TzkSvrUpgOrderVec = [];
mutexTzkSvrUpg = false;