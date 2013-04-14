#ifndef MARKETINGTAGSGETREQUEST_H
#define MARKETINGTAGSGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/MarketingTagsGetResponse.h>

/**
 * TOP API: 查询人群标签，返回卖家创建的全部人群标签（有效的）
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class MarketingTagsGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getFields() const
;  void setFields (QString fields);


  virtual MarketingTagsGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 需要的返回字段，可选值为UserTag中所有字段
 **/
  QString fields;

};

#endif  /* MARKETINGTAGSGETREQUEST_H */
