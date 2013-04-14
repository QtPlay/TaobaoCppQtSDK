#ifndef WANGWANGINFO_H
#define WANGWANGINFO_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief 旺旺信息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WangwangInfo : public TaoDomain
{

public:
 virtual ~WangwangInfo() { }

  QString getSite() const;
  void setSite (QString site);
  QString getWangwangId() const;
  void setWangwangId (QString wangwangId);
  
  virtual void parseResponse();

private:
/**
 * @brief 旺旺类型。cntaobao：taobao旺旺；cnalichn：阿里巴巴旺旺。
 **/
  QString site;

/**
 * @brief 旺旺id
 **/
  QString wangwangId;

};

#endif  /* WANGWANGINFO_H */
