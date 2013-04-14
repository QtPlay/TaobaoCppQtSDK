#ifndef WLBORDERITEMPAGEGETREQUEST_H
#define WLBORDERITEMPAGEGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/WlbOrderitemPageGetResponse.h>

/**
 * TOP API: 分页查询物流宝订单商品详情
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WlbOrderitemPageGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getOrderCode() const
;  void setOrderCode (QString orderCode);

 qlonglong getPageNo() const
;  void setPageNo (qlonglong pageNo);

 qlonglong getPageSize() const
;  void setPageSize (qlonglong pageSize);


  virtual WlbOrderitemPageGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 物流宝订单编码
 **/
  QString orderCode;

/**
 * @brief 分页查询参数，指定查询页数，默认为1
 **/
  qlonglong pageNo;

/**
 * @brief 分页查询参数，每页查询数量，默认20，最大值50,大于50时按照50条查询
 **/
  qlonglong pageSize;

};

#endif  /* WLBORDERITEMPAGEGETREQUEST_H */
