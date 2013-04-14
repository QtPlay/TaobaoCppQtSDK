#ifndef CAIPIAOLOTTERYSENDREQUEST_H
#define CAIPIAOLOTTERYSENDREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/CaipiaoLotterySendResponse.h>

/**
 * TOP API: 卖家给买家送彩票，可以指定彩种和注数。赠送成功，返回true; 以下几种情况情况， 返回false: 注数超过100注、卖家未签署支付宝代扣协议、卖家或者买家信息不存在等。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class CaipiaoLotterySendRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getBuyerNumId() const
;  void setBuyerNumId (qlonglong buyerNumId);

 qlonglong getLotteryTypeId() const
;  void setLotteryTypeId (qlonglong lotteryTypeId);

 qlonglong getSellerNumId() const
;  void setSellerNumId (qlonglong sellerNumId);

 qlonglong getStakeCount() const
;  void setStakeCount (qlonglong stakeCount);

 QString getSweetyWords() const
;  void setSweetyWords (QString sweetyWords);


  virtual CaipiaoLotterySendResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 彩票接收方淘宝数字ID，不可为空、0和负数。
 **/
  qlonglong buyerNumId;

/**
 * @brief 彩种ID，此彩种ID为彩票系统中的序号。
 **/
  qlonglong lotteryTypeId;

/**
 * @brief 送彩方淘宝数字ID， 不可为空、0和负数。
 **/
  qlonglong sellerNumId;

/**
 * @brief 彩票注数，不可为空、0和负数，最大值为100。
 **/
  qlonglong stakeCount;

/**
 * @brief 送彩票给接收方的赠言。 不能超过50个字符，1个中文字符、1个英文字母及1个数字等均当作一个字符，如果超过，则会截取。
 **/
  QString sweetyWords;

};

#endif  /* CAIPIAOLOTTERYSENDREQUEST_H */
