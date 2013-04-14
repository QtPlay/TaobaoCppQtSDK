#include <TaoApiCpp/request/CaipiaoLotterySendbynickRequest.h>

QString CaipiaoLotterySendbynickRequest::getApiMethodName() const {
  return "taobao.caipiao.lottery.sendbynick";
}

QString CaipiaoLotterySendbynickRequest::getBuyerNick() const {
  return buyerNick;
}
void CaipiaoLotterySendbynickRequest::setBuyerNick (QString buyerNick) {
  this->buyerNick = buyerNick;
  appParams.insert("buyer_nick", buyerNick);
}

qlonglong CaipiaoLotterySendbynickRequest::getLotteryTypeId() const {
  return lotteryTypeId;
}
void CaipiaoLotterySendbynickRequest::setLotteryTypeId (qlonglong lotteryTypeId) {
  this->lotteryTypeId = lotteryTypeId;
  appParams.insert("lottery_type_id", QString::number(lotteryTypeId));
}

qlonglong CaipiaoLotterySendbynickRequest::getStakeCount() const {
  return stakeCount;
}
void CaipiaoLotterySendbynickRequest::setStakeCount (qlonglong stakeCount) {
  this->stakeCount = stakeCount;
  appParams.insert("stake_count", QString::number(stakeCount));
}

QString CaipiaoLotterySendbynickRequest::getSweetyWords() const {
  return sweetyWords;
}
void CaipiaoLotterySendbynickRequest::setSweetyWords (QString sweetyWords) {
  this->sweetyWords = sweetyWords;
  appParams.insert("sweety_words", sweetyWords);
}



CaipiaoLotterySendbynickResponse *CaipiaoLotterySendbynickRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  CaipiaoLotterySendbynickResponse *tmpResponse = new CaipiaoLotterySendbynickResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
