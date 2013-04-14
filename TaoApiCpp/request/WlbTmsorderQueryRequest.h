#ifndef WLBTMSORDERQUERYREQUEST_H
#define WLBTMSORDERQUERYREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/WlbTmsorderQueryResponse.h>

/**
 * TOP API: 通过物流订单编号分页查询物流信息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WlbTmsorderQueryRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getOrderCode() const
;  void setOrderCode (QString orderCode);

 qlonglong getPageNo() const
;  void setPageNo (qlonglong pageNo);

 qlonglong getPageSize() const
;  void setPageSize (qlonglong pageSize);


  virtual WlbTmsorderQueryResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 物流订单编号
 **/
  QString orderCode;

/**
 * @brief 当前页
 **/
  qlonglong pageNo;

/**
 * @brief 分页记录个数，如果用户输入的记录数大于50，则一页显示50条记录
 **/
  qlonglong pageSize;

};

#endif  /* WLBTMSORDERQUERYREQUEST_H */
