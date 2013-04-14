#ifndef SCITEMOUTERCODEGETREQUEST_H
#define SCITEMOUTERCODEGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/ScitemOutercodeGetResponse.h>

/**
 * TOP API: 根据outerCode查询商品
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ScitemOutercodeGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getOuterCode() const
;  void setOuterCode (QString outerCode);


  virtual ScitemOutercodeGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 商品编码
 **/
  QString outerCode;

};

#endif  /* SCITEMOUTERCODEGETREQUEST_H */
