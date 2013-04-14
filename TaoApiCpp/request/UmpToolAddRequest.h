#ifndef UMPTOOLADDREQUEST_H
#define UMPTOOLADDREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/UmpToolAddResponse.h>

/**
 * TOP API: 新增优惠工具。通过ump sdk来完成将积木块拼装成为工具的操作，再使用本接口上传优惠工具。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class UmpToolAddRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getContent() const
;  void setContent (QString content);


  virtual UmpToolAddResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 工具内容，由sdk里面的MarketingTool生成的json字符串
 **/
  QString content;

};

#endif  /* UMPTOOLADDREQUEST_H */
