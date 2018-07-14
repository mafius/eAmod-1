--
-- Table structure for table `harmony_log` (HARMONY)
--

DROP TABLE IF EXISTS `harmony_log`;
CREATE TABLE  `harmony_log` (
  `log_id` int(11) NOT NULL AUTO_INCREMENT PRIMARY KEY,
  `account_id` int(11) NOT NULL,
  `char_name` varchar(24) NOT NULL,
  `date` TIMESTAMP NOT NULL DEFAULT CURRENT_TIMESTAMP ,
  `IP` varchar(20) NOT NULL default '',
  `data` varchar(200) NOT NULL default '',
  INDEX (`account_id`)
) ENGINE = MYISAM CHARACTER SET utf8 COLLATE utf8_general_ci;

ALTER TABLE `loginlog` ADD `mac` varchar(18) NOT NULL default '';
