#ifndef UMPTOOLGETRESPONSE_H
#define UMPTOOLGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>


/**
 * @brief TOP RESPONSE API: 根据工具id获取一个工具对象
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class UmpToolGetResponse : public TaoResponse
{
public:
 virtual ~UmpToolGetResponse() { }

  QString getContent() const;
  void setContent (QString content);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 工具信息内容，格式为json，可以通过提供给的sdk里面的MarketingBuilder来处理这个内容
 **/
  QString content;

};

#endif
