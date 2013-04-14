#ifndef HOTELORDERSSEARCHREQUEST_H
#define HOTELORDERSSEARCHREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/HotelOrdersSearchResponse.h>

/**
 * TOP API: 此接口用于查询多个酒店订单，根据传入的查询条件查询订单信息。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class HotelOrdersSearchRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QDateTime getCheckinDateEnd() const
;  void setCheckinDateEnd (QDateTime checkinDateEnd);

 QDateTime getCheckinDateStart() const
;  void setCheckinDateStart (QDateTime checkinDateStart);

 QDateTime getCheckoutDateEnd() const
;  void setCheckoutDateEnd (QDateTime checkoutDateEnd);

 QDateTime getCheckoutDateStart() const
;  void setCheckoutDateStart (QDateTime checkoutDateStart);

 QDateTime getCreatedEnd() const
;  void setCreatedEnd (QDateTime createdEnd);

 QDateTime getCreatedStart() const
;  void setCreatedStart (QDateTime createdStart);

 QString getGids() const
;  void setGids (QString gids);

 QString getHids() const
;  void setHids (QString hids);

 bool getNeedGuest() const
;  void setNeedGuest (bool needGuest);

 bool getNeedMessage() const
;  void setNeedMessage (bool needMessage);

 QString getOids() const
;  void setOids (QString oids);

 qlonglong getPageNo() const
;  void setPageNo (qlonglong pageNo);

 QString getRids() const
;  void setRids (QString rids);

 QString getStatus() const
;  void setStatus (QString status);

 QString getTids() const
;  void setTids (QString tids);


  virtual HotelOrdersSearchResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 入住时间查询结束时间，格式为：yyyy-MM-dd。不能早于checkin_date_start，间隔不能大于30
 **/
  QDateTime checkinDateEnd;

/**
 * @brief 入住时间查询起始时间，格式为：yyyy-MM-dd
 **/
  QDateTime checkinDateStart;

/**
 * @brief 离店时间查询结束时间，格式为：yyyy-MM-dd。不能早于checkout_date_start，间隔不能大于30
 **/
  QDateTime checkoutDateEnd;

/**
 * @brief 离店时间查询起始时间，格式为：yyyy-MM-dd
 **/
  QDateTime checkoutDateStart;

/**
 * @brief 订单创建时间查询结束时间，格式为：yyyy-MM-dd。不能早于created_start，间隔不能大于30
 **/
  QDateTime createdEnd;

/**
 * @brief 订单创建时间查询起始时间，格式为：yyyy-MM-dd
 **/
  QDateTime createdStart;

/**
 * @brief 商品gid列表，多个gid用英文逗号隔开，一次不超过5个
 **/
  QString gids;

/**
 * @brief 酒店hid列表，多个hid用英文逗号隔开，一次不超过5个
 **/
  QString hids;

/**
 * @brief 是否需要返回该订单的入住人列表。可选值：true，false。
 **/
  bool needGuest;

/**
 * @brief 是否显示买家留言，可选值true、false
 **/
  bool needMessage;

/**
 * @brief 酒店订单oids列表，多个oid用英文逗号隔开，一次不超过20个。oids，tids，hids，rids，gids，（checkin_date_start，checkin_date_end），（checkout_date_start，checkout_date_end），（created_start，created_end）必须传入一项，括号表示需同时存在才做为查询条件。 
oids，tids，hids，rids，gids同时出现时，优先级按此顺序由高到低只取一项。其他同时出现时，并列使用。
 **/
  QString oids;

/**
 * @brief 分页页码。取值范围，大于零的整数，默认值1，即返回第一页的数据。页面大小为20
 **/
  qlonglong pageNo;

/**
 * @brief 房型rid列表，多个rid用英文逗号隔开，一次不超过5个
 **/
  QString rids;

/**
 * @brief 订单状态。A：等待买家付款。B：买家已付款待卖家发货。C：卖家已发货待买家确认。D：交易成功。E：交易关闭
 **/
  QString status;

/**
 * @brief 淘宝订单tid列表，多个tid用英文逗号隔开，一次不超过20个。
 **/
  QString tids;

};

#endif  /* HOTELORDERSSEARCHREQUEST_H */
