--
-- Table structure for table `mac_bans` (HARMONY)
--

DROP TABLE IF EXISTS `mac_bans`;
CREATE TABLE `mac_bans` (
  `mac` varchar(17) NOT NULL PRIMARY KEY,
  `comment` varchar(255) NOT NULL default '',
  `time` timestamp NOT NULL default CURRENT_TIMESTAMP
) ENGINE = MYISAM ;

ALTER TABLE `login` ADD `last_mac` varchar(18) NOT NULL default '';
