#ifndef UMPMBBSGETRESPONSE_H
#define UMPMBBSGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>


/**
 * @brief TOP RESPONSE API: 获取营销积木块列表，可以根据类型获取，也可以将该字段设为空，获取所有的
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class UmpMbbsGetResponse : public TaoResponse
{
public:
 virtual ~UmpMbbsGetResponse() { }

  QList<QString> getMbbs() const;
  void setMbbs (QList<QString> mbbs);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 营销积木块内容列表，内容为json格式的，可以通过ump sdk里面的MBB.fromJson来处理
 **/
  QList<QString> mbbs;

};

#endif
