pragma solidity ^0.8.0;
// SPDX-License-Identifier: MIT

contract bank{

    address public owner;
    mapping(address=>uint256) public Accounts;

    constructor(){
        owner = msg.sender;
    }

    modifier onlyOwner{
        require(owner==msg.sender,"Only Owner can carry out this Transaction.");
        _;
    }

    function deposit(uint256 amount,address add) public onlyOwner {
        Accounts[add] += amount;
    }

    function withdraw(uint256 amount,address  add) public onlyOwner {
        require(amount<=Accounts[add],"Insufficient funds");
        Accounts[add]-= amount;
    }
}