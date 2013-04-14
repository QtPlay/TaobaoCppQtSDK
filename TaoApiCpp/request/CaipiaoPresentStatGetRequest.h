#ifndef CAIPIAOPRESENTSTATGETREQUEST_H
#define CAIPIAOPRESENTSTATGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/CaipiaoPresentStatGetResponse.h>

/**
 * TOP API: 查询卖家一段时间内按天统计的彩票赠送数据，只支持查询90天以内的数据.
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class CaipiaoPresentStatGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getDays() const
;  void setDays (qlonglong days);


  virtual CaipiaoPresentStatGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 指定查询的天数，从当前日期（不包括当前日期）向前推算的天数，可为空。如果为空、0、负数或者大于90天，则设置为默认的90天。举例：当天是20120703， days=2， 则统计数据的日期为：20120702，20120701.
 **/
  qlonglong days;

};

#endif  /* CAIPIAOPRESENTSTATGETREQUEST_H */
