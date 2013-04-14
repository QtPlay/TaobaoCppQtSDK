#ifndef PROMOTIONCOUPONDETAILGETREQUEST_H
#define PROMOTIONCOUPONDETAILGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/PromotionCoupondetailGetResponse.h>

/**
 * TOP API: 通过接口可以查询某个店铺优惠券的买家详细信息返回的信息，买家昵称， 使用渠道，使用状态，总数量
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class PromotionCoupondetailGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getBuyerNick() const
;  void setBuyerNick (QString buyerNick);

 qlonglong getCouponId() const
;  void setCouponId (qlonglong couponId);

 QDateTime getEndTime() const
;  void setEndTime (QDateTime endTime);

 qlonglong getPageNo() const
;  void setPageNo (qlonglong pageNo);

 qlonglong getPageSize() const
;  void setPageSize (qlonglong pageSize);

 QString getState() const
;  void setState (QString state);


  virtual PromotionCoupondetailGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 买家昵称
 **/
  QString buyerNick;

/**
 * @brief 优惠券的id
 **/
  qlonglong couponId;

/**
 * @brief 优惠券截至时间 如果截至日期不输入的话，查询当前日期向前15天的数据，否则，查询输入的截至日期向前15天的数据。
 **/
  QDateTime endTime;

/**
 * @brief 查询的页号，结果集是分页返回的，每页20条
 **/
  qlonglong pageNo;

/**
 * @brief 每页行数
 **/
  qlonglong pageSize;

/**
 * @brief 优惠券使用情况unused：代表未使用using：代表使用中used：代表已使用。必须是unused，using，used
 **/
  QString state;

};

#endif  /* PROMOTIONCOUPONDETAILGETREQUEST_H */
