#ifndef WLBORDERSCHEDULERULEQUERYREQUEST_H
#define WLBORDERSCHEDULERULEQUERYREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/WlbOrderscheduleruleQueryResponse.h>

/**
 * TOP API: 查询某个卖家的所有订单调度规则，提供分页查询。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WlbOrderscheduleruleQueryRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getPageNo() const
;  void setPageNo (qlonglong pageNo);

 qlonglong getPageSize() const
;  void setPageSize (qlonglong pageSize);


  virtual WlbOrderscheduleruleQueryResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 当前页
 **/
  qlonglong pageNo;

/**
 * @brief 分页记录个数，如果用户输入的记录数大于50，则一页显示50条记录
 **/
  qlonglong pageSize;

};

#endif  /* WLBORDERSCHEDULERULEQUERYREQUEST_H */
