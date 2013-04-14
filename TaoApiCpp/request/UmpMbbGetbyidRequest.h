#ifndef UMPMBBGETBYIDREQUEST_H
#define UMPMBBGETBYIDREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/UmpMbbGetbyidResponse.h>

/**
 * TOP API: 根据积木块id获取营销积木块。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class UmpMbbGetbyidRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getId() const
;  void setId (qlonglong id);


  virtual UmpMbbGetbyidResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 积木块的id
 **/
  qlonglong id;

};

#endif  /* UMPMBBGETBYIDREQUEST_H */
