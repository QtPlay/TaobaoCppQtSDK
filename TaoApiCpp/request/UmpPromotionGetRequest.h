#ifndef UMPPROMOTIONGETREQUEST_H
#define UMPPROMOTIONGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/UmpPromotionGetResponse.h>

/**
 * TOP API: 商品优惠详情查询，可查询商品设置的详细优惠。包括限时折扣，满就送等官方优惠以及第三方优惠。此接口有调用频率限制请酌情使用，建议使用淘客API获取商品折扣价格。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class UmpPromotionGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getChannelKey() const
;  void setChannelKey (QString channelKey);

 qlonglong getItemId() const
;  void setItemId (qlonglong itemId);


  virtual UmpPromotionGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 渠道来源，第三方站点
 **/
  QString channelKey;

/**
 * @brief 商品id
 **/
  qlonglong itemId;

};

#endif  /* UMPPROMOTIONGETREQUEST_H */
