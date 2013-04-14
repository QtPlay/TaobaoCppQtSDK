#ifndef UMPTOOLSGETRESPONSE_H
#define UMPTOOLSGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>


/**
 * @brief TOP RESPONSE API: 查询工具列表
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class UmpToolsGetResponse : public TaoResponse
{
public:
 virtual ~UmpToolsGetResponse() { }

  QList<QString> getTools() const;
  void setTools (QList<QString> tools);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 工具列表，单个内容为json格式，需要通过ump的sdk提供的MarketingBuilder来进行处理
 **/
  QList<QString> tools;

};

#endif
