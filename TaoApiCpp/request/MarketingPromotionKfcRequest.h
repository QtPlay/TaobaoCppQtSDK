#ifndef MARKETINGPROMOTIONKFCREQUEST_H
#define MARKETINGPROMOTIONKFCREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/MarketingPromotionKfcResponse.h>

/**
 * TOP API: 活动名称与描述违禁词检查
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class MarketingPromotionKfcRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getPromotionDesc() const
;  void setPromotionDesc (QString promotionDesc);

 QString getPromotionTitle() const
;  void setPromotionTitle (QString promotionTitle);


  virtual MarketingPromotionKfcResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 活动描述
 **/
  QString promotionDesc;

/**
 * @brief 活动名称
 **/
  QString promotionTitle;

};

#endif  /* MARKETINGPROMOTIONKFCREQUEST_H */
