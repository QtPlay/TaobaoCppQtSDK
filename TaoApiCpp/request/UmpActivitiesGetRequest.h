#ifndef UMPACTIVITIESGETREQUEST_H
#define UMPACTIVITIESGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/UmpActivitiesGetResponse.h>

/**
 * TOP API: 查询活动列表
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class UmpActivitiesGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getPageNo() const
;  void setPageNo (qlonglong pageNo);

 qlonglong getPageSize() const
;  void setPageSize (qlonglong pageSize);

 qlonglong getToolId() const
;  void setToolId (qlonglong toolId);


  virtual UmpActivitiesGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 分页的页码
 **/
  qlonglong pageNo;

/**
 * @brief 每页的最大条数
 **/
  qlonglong pageSize;

/**
 * @brief 工具id
 **/
  qlonglong toolId;

};

#endif  /* UMPACTIVITIESGETREQUEST_H */
