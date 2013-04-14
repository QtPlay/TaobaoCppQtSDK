#ifndef UMPDETAILSGETREQUEST_H
#define UMPDETAILSGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/UmpDetailsGetResponse.h>

/**
 * TOP API: 分页查询优惠详情列表
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class UmpDetailsGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getActId() const
;  void setActId (qlonglong actId);

 qlonglong getPageNo() const
;  void setPageNo (qlonglong pageNo);

 qlonglong getPageSize() const
;  void setPageSize (qlonglong pageSize);


  virtual UmpDetailsGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 营销活动id
 **/
  qlonglong actId;

/**
 * @brief 分页的页码
 **/
  qlonglong pageNo;

/**
 * @brief 每页的最大条数
 **/
  qlonglong pageSize;

};

#endif  /* UMPDETAILSGETREQUEST_H */
