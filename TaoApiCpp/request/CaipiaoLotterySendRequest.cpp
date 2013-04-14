#include <TaoApiCpp/request/CaipiaoLotterySendRequest.h>

QString CaipiaoLotterySendRequest::getApiMethodName() const {
  return "taobao.caipiao.lottery.send";
}

qlonglong CaipiaoLotterySendRequest::getBuyerNumId() const {
  return buyerNumId;
}
void CaipiaoLotterySendRequest::setBuyerNumId (qlonglong buyerNumId) {
  this->buyerNumId = buyerNumId;
  appParams.insert("buyer_num_id", QString::number(buyerNumId));
}

qlonglong CaipiaoLotterySendRequest::getLotteryTypeId() const {
  return lotteryTypeId;
}
void CaipiaoLotterySendRequest::setLotteryTypeId (qlonglong lotteryTypeId) {
  this->lotteryTypeId = lotteryTypeId;
  appParams.insert("lottery_type_id", QString::number(lotteryTypeId));
}

qlonglong CaipiaoLotterySendRequest::getSellerNumId() const {
  return sellerNumId;
}
void CaipiaoLotterySendRequest::setSellerNumId (qlonglong sellerNumId) {
  this->sellerNumId = sellerNumId;
  appParams.insert("seller_num_id", QString::number(sellerNumId));
}

qlonglong CaipiaoLotterySendRequest::getStakeCount() const {
  return stakeCount;
}
void CaipiaoLotterySendRequest::setStakeCount (qlonglong stakeCount) {
  this->stakeCount = stakeCount;
  appParams.insert("stake_count", QString::number(stakeCount));
}

QString CaipiaoLotterySendRequest::getSweetyWords() const {
  return sweetyWords;
}
void CaipiaoLotterySendRequest::setSweetyWords (QString sweetyWords) {
  this->sweetyWords = sweetyWords;
  appParams.insert("sweety_words", sweetyWords);
}



CaipiaoLotterySendResponse *CaipiaoLotterySendRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  CaipiaoLotterySendResponse *tmpResponse = new CaipiaoLotterySendResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
