#ifndef FUWUSALELINKGENRESPONSE_H
#define FUWUSALELINKGENRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>


/**
 * @brief TOP RESPONSE API: 服务商通过使用该接口来产生营销链接，通过把这种链接发送给商家来做自定义人群的服务营销<br> 
注：session是param_str这个参数串创建者生成的session，这个创建者与入参中的nick是不一致的。例如：A开发者创建了一个param_str的字符串，要为B商家生成一个营销链接，session必须是A开发者创建的session。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class FuwuSaleLinkGenResponse : public TaoResponse
{
public:
 virtual ~FuwuSaleLinkGenResponse() { }

  QString getUrl() const;
  void setUrl (QString url);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 通过营销链接接口生成的营销链接短地址
 **/
  QString url;

};

#endif
