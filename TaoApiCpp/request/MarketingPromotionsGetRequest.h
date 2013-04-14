#ifndef MARKETINGPROMOTIONSGETREQUEST_H
#define MARKETINGPROMOTIONSGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/MarketingPromotionsGetResponse.h>

/**
 * TOP API: 根据商品ID查询卖家使用该第三方工具对商品设置的所有优惠策略
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class MarketingPromotionsGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getFields() const
;  void setFields (QString fields);

 QString getNumIid() const
;  void setNumIid (QString numIid);

 QString getStatus() const
;  void setStatus (QString status);

 qlonglong getTagId() const
;  void setTagId (qlonglong tagId);


  virtual MarketingPromotionsGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 需返回的优惠策略结构字段列表。可选值为Promotion中所有字段，如：promotion_id, promotion_title, item_id, status, tag_id等等
 **/
  QString fields;

/**
 * @brief 商品数字ID。根据该ID查询商品下通过第三方工具设置的所有优惠策略
 **/
  QString numIid;

/**
 * @brief 优惠策略状态。可选值：ACTIVE(有效)，UNACTIVE(无效)，若不传或者传入其他值，则默认查询全部
 **/
  QString status;

/**
 * @brief 标签ID
 **/
  qlonglong tagId;

};

#endif  /* MARKETINGPROMOTIONSGETREQUEST_H */
