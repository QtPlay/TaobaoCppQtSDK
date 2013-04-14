#ifndef FENXIAOGRADESGETREQUEST_H
#define FENXIAOGRADESGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/FenxiaoGradesGetResponse.h>

/**
 * TOP API: 根据供应商ID，查询他的分销商等级信息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class FenxiaoGradesGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;


  virtual FenxiaoGradesGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:

};

#endif  /* FENXIAOGRADESGETREQUEST_H */
