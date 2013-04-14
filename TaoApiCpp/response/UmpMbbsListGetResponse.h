#ifndef UMPMBBSLISTGETRESPONSE_H
#define UMPMBBSLISTGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>


/**
 * @brief TOP RESPONSE API: 通过营销积木id列表来获取营销积木块列表。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class UmpMbbsListGetResponse : public TaoResponse
{
public:
 virtual ~UmpMbbsListGetResponse() { }

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
