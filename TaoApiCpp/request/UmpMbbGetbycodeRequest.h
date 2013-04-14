#ifndef UMPMBBGETBYCODEREQUEST_H
#define UMPMBBGETBYCODEREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/UmpMbbGetbycodeResponse.h>

/**
 * TOP API: 根据营销积木块代码获取积木块。接口返回该代码最新版本的积木块。如果要查询某个非最新版本的积木块，可以使用积木块id查询接口。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class UmpMbbGetbycodeRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getCode() const
;  void setCode (QString code);


  virtual UmpMbbGetbycodeResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 营销积木块code
 **/
  QString code;

};

#endif  /* UMPMBBGETBYCODEREQUEST_H */
