#ifndef CAIPIAOPRESENTITEMSGETREQUEST_H
#define CAIPIAOPRESENTITEMSGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/CaipiaoPresentItemsGetResponse.h>

/**
 * TOP API: 查询卖家指定时间范围内的赠送订单列表, 只查询3个月以内的数据
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class CaipiaoPresentItemsGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getEndDate() const
;  void setEndDate (QString endDate);

 qlonglong getPageNo() const
;  void setPageNo (qlonglong pageNo);

 qlonglong getPageSize() const
;  void setPageSize (qlonglong pageSize);

 QString getStartDate() const
;  void setStartDate (QString startDate);


  virtual CaipiaoPresentItemsGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 赠送订单的截止时间，格式为yyyyMMdd, 距当前最长时间间隔是3个月，最近可以取当天的时间。不可为空。要求endDate-startDate必须<=3个月，
 **/
  QString endDate;

/**
 * @brief 当前页码， 不可为空、0和负数。
 **/
  qlonglong pageNo;

/**
 * @brief 每页的大小，不可为空、0和负数。最大为500，如果超过500，则取默认的500.
 **/
  qlonglong pageSize;

/**
 * @brief 赠送订单的开始时间， 格式为yyyyMMdd, 距当前最长时间间隔是3个月， 最近可以取当天的时间. 不可为空。
 **/
  QString startDate;

};

#endif  /* CAIPIAOPRESENTITEMSGETREQUEST_H */
