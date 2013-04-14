#include <TaoApiCpp/domain/KeywordQscore.h>
qlonglong KeywordQscore::getAdgroupId() const {
  return adgroupId;
}
void KeywordQscore::setAdgroupId (qlonglong adgroupId) {
  this->adgroupId = adgroupId;
}

qlonglong KeywordQscore::getCampaignId() const {
  return campaignId;
}
void KeywordQscore::setCampaignId (qlonglong campaignId) {
  this->campaignId = campaignId;
}

qlonglong KeywordQscore::getKeywordId() const {
  return keywordId;
}
void KeywordQscore::setKeywordId (qlonglong keywordId) {
  this->keywordId = keywordId;
}

QString KeywordQscore::getNick() const {
  return nick;
}
void KeywordQscore::setNick (QString nick) {
  this->nick = nick;
}

QString KeywordQscore::getQscore() const {
  return qscore;
}
void KeywordQscore::setQscore (QString qscore) {
  this->qscore = qscore;
}

QString KeywordQscore::getWord() const {
  return word;
}
void KeywordQscore::setWord (QString word) {
  this->word = word;
}


void KeywordQscore::parseResponse() {
  if (responseParser->hasName("adgroup_id")) {
  adgroupId = responseParser->getNumByName("adgroup_id");
  }
  if (responseParser->hasName("campaign_id")) {
  campaignId = responseParser->getNumByName("campaign_id");
  }
  if (responseParser->hasName("keyword_id")) {
  keywordId = responseParser->getNumByName("keyword_id");
  }
  if (responseParser->hasName("nick")) {
  nick = responseParser->getStrByName("nick");
  }
  if (responseParser->hasName("qscore")) {
  qscore = responseParser->getStrByName("qscore");
  }
  if (responseParser->hasName("word")) {
  word = responseParser->getStrByName("word");
  }

}

